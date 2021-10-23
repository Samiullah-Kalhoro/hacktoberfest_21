import React, { Component } from "react";
import "./TaskItem.css";
export default class TaskItem extends Component {
  constructor(props) {
    super(props);
    this.deleteTask = this.deleteTask.bind(this);
    this.state = { task: this.props.taskItem.taskName, isEditing: false };
    this.handleChange = this.handleChange.bind(this);
    this.handleSubmit = this.handleSubmit.bind(this);
    this.toggleTask = this.toggleTask.bind(this);
  }
  deleteTask() {
    this.props.deleteTask(this.props.id);
  }

  setIsEditing(editing) {
    this.setState({ isEditing: editing });
  }
  handleChange(event) {
    this.setState({ task: event.target.value });
  }
  handleSubmit(event) {
    event.preventDefault();
    this.props.editTask(this.props.id, this.state.task);
    this.setState({ isEditing: false });
  }
  toggleTask() {
    this.props.toggleTask(this.props.id);
  }
  render() {
    let result;
    if (this.state.isEditing) {
      result = (
        <tr>
          <td colSpan="2">
            <form onSubmit={this.handleSubmit}>
              <input
                type="text"
                value={this.state.task}
                onChange={this.handleChange}
              />
              <span style={{ float: "right" }}>
                <button className="save task">Save</button>
                <button
                  className="back task"
                  onClick={() => this.setIsEditing(false)}
                >
                  Back
                </button>
              </span>
            </form>
          </td>
        </tr>
      );
    } else {
      result = (
        <tr>
          <td onClick={this.toggleTask} class="task">
            <input
              type="checkbox"
              readOnly
              checked={this.props.taskItem.isCompleted}
            />
            <span
              className={
                this.props.taskItem.isCompleted ? "completed" : "not-completed"
              }
            >
              {this.props.taskItem.taskName}
            </span>
          </td>
          <td className="Actions">
            <button
              className="edit task"
              onClick={() => this.setIsEditing(true)}
            >
              Edit
            </button>
            <button className="delete task" onClick={this.deleteTask}>
              Delete
            </button>
          </td>
        </tr>
      );
    }

    return result;
  }
}
