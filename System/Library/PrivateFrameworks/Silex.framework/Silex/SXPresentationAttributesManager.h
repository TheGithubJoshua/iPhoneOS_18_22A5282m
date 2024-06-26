@class SXPresentationAttributes, NSString, NSHashTable;

@interface SXPresentationAttributesManager : NSObject <SXPresentationAttributesManager>

@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) SXPresentationAttributes *presentationAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)attributesChangedFrom:(id)a0 to:(id)a1;
- (void)updateAttributes:(id)a0;

@end
