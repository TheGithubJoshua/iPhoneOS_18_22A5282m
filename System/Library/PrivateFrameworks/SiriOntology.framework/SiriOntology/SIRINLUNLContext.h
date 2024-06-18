@class NSArray;

@interface SIRINLUNLContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *systemDialogActs;
@property (retain, nonatomic) NSArray *activeTasks;
@property (retain, nonatomic) NSArray *executedTasks;
@property (retain, nonatomic) NSArray *salientEntities;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSystemDialogActs:(id)a0 activeTasks:(id)a1 executedTasks:(id)a2 salientEntities:(id)a3;
- (id)initWithSystemDialogActs:(id)a0 activeTasks:(id)a1 executedTasks:(id)a2;

@end
