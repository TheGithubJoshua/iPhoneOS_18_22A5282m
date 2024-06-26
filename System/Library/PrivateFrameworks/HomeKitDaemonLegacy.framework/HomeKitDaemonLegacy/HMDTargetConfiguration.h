@class NSUUID, NSString, NSArray, NSNumber;

@interface HMDTargetConfiguration : HMFObject

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) long long category;
@property (retain, nonatomic) NSArray *buttonConfiguration;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithAccessory:(id)a0 buttonConfiguration:(id)a1;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(long long)a2 buttonConfiguration:(id)a3;

@end
