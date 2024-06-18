@class NSMethodSignature, NSString;

@interface CLIntersiloInterfaceSelectorInfo : NSObject

@property (readonly, nonatomic) SEL sel;
@property (readonly, nonatomic) int lastArgBlockIndex;
@property (readonly, nonatomic) int returnAddressIndex;
@property (readonly, retain, nonatomic) NSMethodSignature *sig;
@property (readonly, copy, nonatomic) NSString *typeStr;

- (void).cxx_destruct;
- (id)initWithSelector:(SEL)a0 andMethodSignature:(id)a1;
- (id)description;
- (id)typeStr;

@end
