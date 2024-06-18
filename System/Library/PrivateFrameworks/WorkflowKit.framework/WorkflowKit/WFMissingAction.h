@interface WFMissingAction : WFAction

@property (nonatomic) BOOL isForLocalization;

- (id)descriptionDictionary;
- (id)name;
- (id)iconImage;
- (BOOL)inputPassthrough;
- (BOOL)isMissing;
- (BOOL)requiresRemoteExecution;
- (void)runWithInput:(id)a0 error:(id *)a1;

@end
