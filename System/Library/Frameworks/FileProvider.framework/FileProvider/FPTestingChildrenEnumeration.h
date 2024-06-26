@class NSString;

@interface FPTestingChildrenEnumeration : FPTestingOperation <NSFileProviderTestingChildrenEnumeration>

@property (readonly, nonatomic) unsigned long long side;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)asChildrenEnumeration;
- (id)initWithOperationIdentifier:(id)a0 itemIdentifier:(id)a1;

@end
