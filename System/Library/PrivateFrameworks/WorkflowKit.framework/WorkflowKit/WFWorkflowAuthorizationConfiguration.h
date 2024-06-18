@class NSString;

@interface WFWorkflowAuthorizationConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *localizedPrompt;
@property (readonly, copy, nonatomic) NSString *localizedMessage;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)authorizationDialogRequestWithAttribution:(id)a0;
- (id)siriDialogAlertWithCompletionHandler:(id /* block */)a0;

@end
