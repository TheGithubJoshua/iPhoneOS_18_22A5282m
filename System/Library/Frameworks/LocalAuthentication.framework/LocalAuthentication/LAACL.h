@class NSData, NSDictionary;

@interface LAACL : NSObject {
    struct __SecAccessControl { } *_acl;
    NSDictionary *_constraints;
    NSData *_data;
}

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSDictionary *constraints;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (void)evaluateInContext:(id)a0 options:(id)a1 reply:(id /* block */)a2;

@end
