@interface WFLinkSnippetEnvironmentDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAttribution:(id)a0 prompt:(id)a1;

@end
