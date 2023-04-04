import { exec } from "node:child_process";
import { platform } from "node:process";

import Json from "../package.json" assert { type: "json" };

export const runExec = () => {
	const execFileName = Json.name;
	if (platform == "win32") {
		exec(
			`cd ./build/Debug/ && ${execFileName}.exe`,
			(error, stdout, stderr) => {
				if (error) {
					console.log(`error: ${error.message}`);
					return;
				}
				if (stderr) {
					console.log(`stderr: ${stderr}`);
					return;
				}
				console.log(stdout);
			}
		);
	} else if (platform == "linux") {
		exec(
			`cd ./build/Debug/ && ${execFileName}.exe`,
			(error, stdout, stderr) => {
				if (error) {
					console.log(`error: ${error.message}`);
					return;
				}
				if (stderr) {
					console.log(`stderr: ${stderr}`);
					return;
				}
				console.log(stdout);
			}
		);
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
