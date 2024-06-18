@class NSString;

@interface TabCloseUndoGroup : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *name;

- (id)initWithType:(long long)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)_initWithType:(long long)a0 name:(id)a1;

@end
