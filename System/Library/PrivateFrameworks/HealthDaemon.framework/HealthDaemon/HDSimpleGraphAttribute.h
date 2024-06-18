@class NSString;

@interface HDSimpleGraphAttribute : HDSimpleGraphObject

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, nonatomic) long long nodeID;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRowID:(long long)a0 type:(long long)a1 value:(id)a2 nodeID:(long long)a3;
- (id)initWithRowID:(long long)a0 type:(long long)a1 value:(id)a2 nodeID:(long long)a3 version:(long long)a4 slots:(unsigned long long)a5;

@end
