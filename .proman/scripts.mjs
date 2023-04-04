import { exec } from "node:child_process";

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
}