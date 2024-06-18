@class NSString;

@interface WFAskEachTimeVariable : WFVariable

@property (readonly, nonatomic) NSString *prompt;

- (id)icon;
- (id)init;
- (BOOL)isAvailable;
- (id)name;
- (id)initWithPrompt:(id)a0;
- (BOOL)requiresModernVariableSupport;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportsAggrandizements;

@end
