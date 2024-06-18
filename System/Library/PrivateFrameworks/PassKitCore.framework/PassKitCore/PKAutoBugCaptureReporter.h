@class SDRDiagnosticReporter;

@interface PKAutoBugCaptureReporter : NSObject {
    SDRDiagnosticReporter *sdrReporter;
}

- (void)handleResponse:(id)a0;
- (void).cxx_destruct;
- (BOOL)isRunningUnitTests;
- (BOOL)isExpectedFailureReason:(int)a0;
- (void)reportIssueWithDomain:(id)a0 type:(id)a1 subtype:(id)a2 subtypeContext:(id)a3 payload:(id)a4;
- (BOOL)shouldReportIssue;

@end
