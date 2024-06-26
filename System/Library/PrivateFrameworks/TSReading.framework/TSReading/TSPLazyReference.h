@class TSPObject, TSPComponent;
@protocol TSPLazyReferenceDelegate;

@interface TSPLazyReference : NSObject <NSCopying> {
    TSPObject *_strongObject;
    TSPObject *_weakObject;
    BOOL _allowUnknownObject;
}

@property (weak, nonatomic) id<TSPLazyReferenceDelegate> delegate;
@property (readonly, nonatomic) long long identifier;
@property (weak, nonatomic) TSPComponent *component;
@property (readonly, nonatomic) TSPObject *weakObject;
@property (retain, nonatomic) TSPObject *strongObject;
@property (nonatomic) BOOL isWeak;
@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) id objectIfLoaded;

+ (id)referenceForObject:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)resetIdentifier;
- (BOOL)discardStrongObjectIfPossible;
- (id)initWithDelegate:(id)a0 identifier:(long long)a1 isWeak:(BOOL)a2 allowUnknownObject:(BOOL)a3;
- (id)initWithTSPObject:(id)a0;
- (BOOL)isEqualToLazyReference:(id)a0;
- (BOOL)referencesObject:(id)a0;

@end
