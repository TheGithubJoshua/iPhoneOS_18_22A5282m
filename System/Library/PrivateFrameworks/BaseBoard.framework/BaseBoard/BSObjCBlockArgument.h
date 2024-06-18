@class NSArray, BSObjCArgument;

@interface BSObjCBlockArgument : BSObjCArgument

@property (readonly, retain, nonatomic) BSObjCArgument *returnValue;
@property (readonly, copy, nonatomic) NSArray *arguments;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)isBlock;
- (void).cxx_destruct;
- (id)_prettyTypeString;

@end
