#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

#include <stdint.h>

/*
 * PEM-encoded client certificate.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWjCCAkKgAwIBAgIVAMXiIDQfIh1ZOPrbkE2875xkcosoMA0GCSqGSIb3DQEB\n"\
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"\
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yMjA0MDcwNTQ4\n"\
"NDVaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"\
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQC19StG7pNqMO3C3sLq\n"\
"FFHT7hMA7ZYHw/JZ0gDpdqRNj9VYjH6M+eAGuId2WIBlSE37cLliTcUIFBaeh5yd\n"\
"qnbpFVYQgBCDSZrqFyHaTZloKuIxgyPLPCYY1HvtQBpwDAfroSslBa0uJg+GL6xW\n"\
"to7b9hJ5aciAd0DLDnjjkl4oBUJrCFTxm84jmmePLrHgo7y0JCaFgcNgxmd24SUt\n"\
"C5ymG70Rf+46Pldu5qrk3WDNfVd/gWJtS5jT3z4HCpMYFtnfdWjccjK36HgX82zw\n"\
"97caE7SBQjgIAZzQAUWvi1J59WJpzp/U6JWijGOKytZkl3s8woKBM6Taot3bxGUM\n"\
"Gk2/AgMBAAGjYDBeMB8GA1UdIwQYMBaAFLlMK9z8y+Ec09Hyundr6GSUr57dMB0G\n"\
"A1UdDgQWBBSHIqrXA5nmi1NVp4IYEudUPpmloTAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"\
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAJSdsZ/ayecdwdcDDiba3uflu\n"\
"pcY4E1SQktU6KrxeIHEqtosySRevAGnfQY1/Lwo55uYx57DeztSto9HwrTAiWLcu\n"\
"GbX8TLyJAR9tlwKmve2x9S6NzYOm/5wjT2wcqIsQhIGRynhybFEkOjauNzRANsM/\n"\
"7N86CeKkcvS9kVWaNO26ZUO9xCEE4ZfVD4w8VYOSbbi2yngKW9UMSXPPgyU6qkNt\n"\
"ZvArJhFXwiA7/l7aYmDp6pR5sG1UfGrXc2nRpXn5OqwDTBNpCCigOokVvuORU2uT\n"\
"0/qQCrKJj9ZbrFb5rYZTy1w91OctSe8RAOjn2495NdASsnUEDDBtD1Vg4ObqPA==\n"\
"-----END CERTIFICATE-----"

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEpAIBAAKCAQEAtfUrRu6TajDtwt7C6hRR0+4TAO2WB8PyWdIA6XakTY/VWIx+\n"\
"jPngBriHdliAZUhN+3C5Yk3FCBQWnoecnap26RVWEIAQg0ma6hch2k2ZaCriMYMj\n"\
"yzwmGNR77UAacAwH66ErJQWtLiYPhi+sVraO2/YSeWnIgHdAyw5445JeKAVCawhU\n"\
"8ZvOI5pnjy6x4KO8tCQmhYHDYMZnduElLQucphu9EX/uOj5Xbuaq5N1gzX1Xf4Fi\n"\
"bUuY098+BwqTGBbZ33Vo3HIyt+h4F/Ns8Pe3GhO0gUI4CAGc0AFFr4tSefViac6f\n"\
"1OiVooxjisrWZJd7PMKCgTOk2qLd28RlDBpNvwIDAQABAoIBAQCjQMUDbyp0LFIm\n"\
"dRcMTg7cxs3mF0R00ymtzO1kij4AGPyh5evlMIv/e7COTflk5eqRniG2QXB2Pw/M\n"\
"TIAINdlaZvpA86XdJT0IqpiE9Pqeq1smcTK8Ncs4m+xUgR83SJQSpRfAr8chkKR9\n"\
"EGjfpAuo7q7EoFR0boqDpQhxpfE0lX5jPQQyrVolBrj8clX9q5IF+GGLGf/xv/7G\n"\
"ml79Sem/7wYKupF/2wbudTkLxAef/JcBimwdFT0eXlDONFFcICzrDbIjK3giiqz1\n"\
"Dg2DmWM8U2CVpO7pj/ypb2PJ/njWXdNKGr2J7SJGIHqrXpY42KiI/cRlpjmDLqjD\n"\
"YCIp0eoBAoGBAO15mAms13sLmuV0H50jNcJz3H3iPhD5shQBoV3c9uV7SxclXVuf\n"\
"KJcKemAKg5LrOiWSpRNqxaDA6KWALG5LTReRgcKVDQErCfdtFz4XOZEomK+i4x8E\n"\
"2+YAp9PVmooPe/rSoPp4OyBVN5hKY1E0TU7CaKyhVGnHpsBoblLs8FhPAoGBAMQm\n"\
"40Ujz5+R5iki4ZUfgP77M6I2wPeGFAuKUPXP8As0LlCL7p9yjtxI2r2CPmnD31eM\n"\
"uUeps3tv1vlMrfDmw7qX0I2dkzCDl5dO3HNRqsDFtJJO/MmtH0c+VbH3mxbDH0rb\n"\
"LMbZHQAM4kUI/Ac2E43sxk6mWzqdgLIGsp/n5+eRAoGAfi2rcQibfc+Ov/hRi+bX\n"\
"e7igIWsC23Yw/pxXJ05vCUPXhDbgQfxxTr/MghdUDc5amPgwKf8DfwTBGJ7f/MKZ\n"\
"9bnknoUf4c0CgKtAPEeO2OgfKMN9tk+Yn78dbVsDv/O2RnGAA1W65NUisxJjbxRB\n"\
"N2XoxED8XzAsE/PpGrq2gdUCgYEAo/iiKg0Kpijvz1mCXAeO7RgPDL5ax1BE93Sz\n"\
"wxkFYEhJozmmy5GXTRx2Bs+W3xFHZceUpwx8pmZSvepUyboOyq/YPloIThjjIzBg\n"\
"ZuJRLH7ZOSlgdjMLn6HDP1duRTPtt8TKhJvAe2dJy038aQbSh+TzzZGRV8mMaMXi\n"\
"knvpR5ECgYAjmU8pXPucX2Sg7mExNvBmnafcK6dWRANyBkxaJWZvPYFFCj1ave5w\n"\
"sgVk8kc6tFfFRbK/kt9+bIQ90Ocx78Lw33p96dKs9SuSt+Vnk/7aXWYg2Ze11Cu/\n"\
"c/NUaLETdZvn0dN4cREm8C3pU44hzwDa1cL4tV0NO8N4HHhZf1GjQg==\n"\
"-----END RSA PRIVATE KEY-----"

/*
 * PEM-encoded Just-in-Time Registration (JITR) certificate (optional).
 *
 * If used, must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  ""


#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
