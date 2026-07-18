# Security Policy

## Supported Versions

Since this repository tracks an active, ongoing personal development journey, security updates are strictly applied to the latest state of the main branch. 

| Version | Supported          |
| ------- | ------------------ |
| Main    | 🟢 Supported        |
| < Main  | ❌ Not Supported   |

## Reporting a Vulnerability

### 🚨 Crucial Notice Regarding Automation Secrets
This repository utilizes automated execution engines (`joshcai/leetcode-sync` and native NeetCode webhooks) powered by background environment variables. 
* **Do not** open a public issue if you detect an exposed token, compromised session secret (`LEETCODE_SESSION`), or system runtime vulnerability.
* Public disclosures risk exposing automated state engines to malicious API interactions.

### How to Report Privately
If you discover a security vulnerability or an inadvertently exposed secret, please report it immediately via one of the following private methods:
* **Email:** janhavir11@gmail.com

You will receive an initial response within 48 hours to coordinate validation, remediation steps, and patch deployment before any public advisory is made. Thank you for keeping this algorithmic space secure! ⚔️
