@class NSURL;

@interface MCMContainerSchemaActionMove : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSourceAndDestination> {
    NSURL *_sourceURL;
    NSURL *_destURL;
}

+ (id)actionIdentifier;

- (void).cxx_destruct;
- (id)description;
- (BOOL)performWithError:(id *)a0;
- (id)initWithSourcePathArgument:(id)a0 destinationPathArgument:(id)a1 context:(id)a2;

@end
