from flask import Flask, jsonify, request

app = Flask(__name__)

# Mock AI functions to simulate difficulty-based answers
def get_answer(question, difficulty):
    if difficulty == "easy":
        return "This is an easy answer."
    elif difficulty == "medium":
        return "This is a medium difficulty answer."
    else:
        return "This is a hard answer."

@app.route('/get_answer', methods=['POST'])
def api_get_answer():
    data = request.json
    question = data.get('question')
    difficulty = data.get('difficulty')
    answer = get_answer(question, difficulty)
    return jsonify({"answer": answer})

if __name__ == "__main__":
    app.run(debug=True)
