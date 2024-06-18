@class NSURL;

@interface MCMContainerSchemaActionMkdir : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSinglePath> {
    NSURL *_url;
}

+ (id)actionIdentifier;

- (void).cxx_destruct;
- (id)description;
- (BOOL)performWithError:(id *)a0;
- (id)initWithPathArgument:(id)a0 context:(id)a1;

@end
