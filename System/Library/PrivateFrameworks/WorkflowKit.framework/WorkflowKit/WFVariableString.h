@class NSArray, NSString;

@interface WFVariableString : NSObject <WFVariableSerialization, NSCopying>

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) NSArray *stringsAndVariables;
@property (readonly, nonatomic) NSArray *variables;
@property (readonly, nonatomic) NSString *stringByRemovingVariables;
@property (readonly, nonatomic) NSString *stringByReplacingVariablesWithNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVariable:(id)a0;
- (id)init;
- (id)serializedRepresentation;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)representsSingleContentVariable;
- (void)addVariableDelegate:(id)a0;
- (id)initWithAttachmentCharacterString:(id)a0 variableGetter:(id /* block */)a1;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)initWithStringsAndVariables:(id)a0;
- (void)processIntoContentItemsWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)processIntoStringsAndAttachmentsWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)processWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeVariableDelegate:(id)a0;
- (id)variablesOfType:(id)a0;

@end
