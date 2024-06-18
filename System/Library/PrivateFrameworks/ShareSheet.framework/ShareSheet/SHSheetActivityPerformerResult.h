@class NSArray, NSError, UIActivity;

@interface SHSheetActivityPerformerResult : NSObject

@property (nonatomic) long long completedState;
@property (retain, nonatomic) NSArray *returnedItems;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) UIActivity *activity;

- (void).cxx_destruct;
- (id)description;
- (id)initWithActivity:(id)a0 completedState:(long long)a1 returnedItems:(id)a2 error:(id)a3;

@end
