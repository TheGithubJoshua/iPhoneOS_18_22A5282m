@interface WFSpeechRecognitionAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (id)icon;
- (id)name;
- (unsigned long long)status;
- (void)attemptRecoveryFromErrorWithOptionIndex:(unsigned long long)a0 userInterface:(id)a1 completionHandler:(id /* block */)a2;
- (id)errorRecoveryOptionsForStatus:(unsigned long long)a0;
- (id)localizedErrorReasonForStatus:(unsigned long long)a0;
- (id)protectedResourceDescription;

@end
