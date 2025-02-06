from flask import Flask, request, jsonify

app = Flask(__name__)

# Sample AI logic (Replace this with actual AI model integration later)
def generate_response(question):
    responses = {
        "What is 2 + 2?": "2 + 2 = 4",
        "What is the capital of France?": "The capital of France is Paris.",
        "What is Newton's second law?": "Newton's second law states that F = ma."
    }
    return responses.get(question, "I'm not sure. Can you rephrase the question?")

@app.route("/ask", methods=["POST"])
def ask():
    data = request.get_json()
    question = data.get("query", "")
    response = generate_response(question)
    return jsonify({"response": response})

if __name__ == "__main__":
    app.run(host="127.0.0.1", port=5000, debug=True)
