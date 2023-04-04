#! /usr/bin/env node

import { program } from "commander";
import { runBuild, runExec } from "./.proman/scripts.mjs";

program
	.command("exec")
	.description("Run the project's debug executable")
	.action(runExec);
program
	.command("build")
	.description("Build the project binaries")
	.action(runBuild);

program.parse();
