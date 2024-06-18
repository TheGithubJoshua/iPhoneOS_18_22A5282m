@class NSArray, CNUIUserActionItem;

@interface CNUIUserActionListModel : NSObject

@property (retain, nonatomic) CNUIUserActionItem *defaultAction;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSArray *directoryServiceActions;
@property (copy, nonatomic) NSArray *foundOnDeviceActions;
@property (readonly, nonatomic) BOOL isEmpty;

+ (id)emptyModel;

- (void).cxx_destruct;
- (id)description;
- (id)allActions;
- (id)initWithModel:(id)a0 actions:(id)a1;
- (id)initWithDefaultAction:(id)a0 actions:(id)a1 directoryServiceActions:(id)a2 foundOnDeviceActions:(id)a3;

@end
