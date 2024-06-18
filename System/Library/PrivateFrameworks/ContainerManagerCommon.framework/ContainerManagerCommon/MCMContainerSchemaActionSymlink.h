@class NSURL, NSString;

@interface MCMContainerSchemaActionSymlink : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSourceAndDestination> {
    NSURL *_linkURL;
    NSString *_targetPath;
}

+ (id)actionIdentifier;

- (void).cxx_destruct;
- (id)description;
- (BOOL)performWithError:(id *)a0;
- (id)initWithSourcePathArgument:(id)a0 destinationPathArgument:(id)a1 context:(id)a2;

@end
