import { exec } from "node:child_process";
import { platform } from "node:process";
import path from "path";

export const runExec = () => {
	const execFileName = "cpp-storyteller";
	if (platform == "win32") {
		const execFilePath = path.resolve("./build/Debug/Cpp-StoryTeller.exe");
		return;
		exec(`${execFilePath}`, (error, stdout, stderr) => {
			if (error) {
				console.log(`error: ${error.message}`);
				return;
			}
			if (stderr) {
				console.log(`stderr: ${stderr}`);
				return;
			}
			console.log(stdout);
		});
	} else if (platform == "linux") {
		const execFilePath = path.resolve("./build/Cpp-StoryTeller");
		exec(`${execFilePath}`, (error, stdout, stderr) => {
			if (error) {
				console.log(`error: ${error.message}`);
				return;
			}
			if (stderr) {
				console.log(`stderr: ${stderr}`);
				return;
			}
			console.log(stdout);
		});
	} else {
		console.log(`${platform} is not supported yet.`);
	}
};

export const runBuild = () => {
	exec("cmake -S . -B ./build", (error, stdout, stderr) => {
		if (error) {
			console.log(`error: ${error.message}`);
			return;
		}
		if (stderr) {
			console.log(`stderr: ${stderr}`);
			return;
		}
		console.log(stdout);
	});
};
