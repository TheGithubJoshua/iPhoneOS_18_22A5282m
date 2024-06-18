@class NSString, NSMutableDictionary;

@interface IPAPreviewSizeRegistry : NSObject {
    NSString *_name;
    NSMutableDictionary *_policies;
}

- (id)init;
- (void)addPolicy:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)initWithName:(id)a0;
- (id)policyForStyle:(unsigned long long)a0;
- (id)policyForStyleObject:(id)a0;

@end
