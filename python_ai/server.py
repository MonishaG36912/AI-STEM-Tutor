from flask import Flask, request, jsonify
from transformers import pipeline

app = Flask(__name__)

# Load a local AI model (like a small GPT model)
qa_model = pipeline("text-generation", model="mistralai/Mistral-7B-Instruct-v0.1")

@app.route('/ask', methods=['POST'])
def ask():
    data = request.get_json()
    question = data.get("query", "")

    response = qa_model(question, max_length=150, do_sample=True)
    answer = response[0]['generated_text']

    return jsonify({"answer": answer})

if __name__ == '__main__':
    app.run(debug=True)
