@class NSData;

@interface CKPackageSection : NSObject

@property (readonly, nonatomic) long long index;
@property (readonly, copy, nonatomic) NSData *signature;
@property (readonly, nonatomic) unsigned long long size;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIndex:(long long)a0 signature:(id)a1 size:(unsigned long long)a2;

@end
