@class NSString, NSDictionary;

@interface NSConcreteNotification : NSNotification {
    NSString *name;
    id object;
    NSDictionary *userInfo;
}

- (id)object;
- (id)name;
- (id)initWithName:(id)a0 object:(id)a1 userInfo:(id)a2;
- (void)dealloc;
- (id)userInfo;

@end
