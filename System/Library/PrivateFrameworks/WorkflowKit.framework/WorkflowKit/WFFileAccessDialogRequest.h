@class NSString, WFDialogButton, NSArray;

@interface WFFileAccessDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) WFDialogButton *okButton;
@property (readonly, copy, nonatomic) WFDialogButton *cancelButton;
@property (readonly, copy, nonatomic) NSArray *URLs;
@property (readonly, copy, nonatomic) NSString *workflowID;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)shouldCenterPrompt;
- (id)initWithPrompt:(id)a0 message:(id)a1 okButton:(id)a2 cancelButton:(id)a3 attribution:(id)a4 workflowID:(id)a5 URLs:(id)a6;

@end
