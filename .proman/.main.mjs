#! /usr/bin/env node

import { program } from "commander";
import { runBuild } from "./scripts.mjs";

program
	.command("exec")
	.description("Run the project's debug executable")
	.action(runBuild);
program
	.command("build")
	.description("Build the project binaries")
	.action(runBuild);

program.parse();
