@class NSString;

@interface CKGroupUpdate : NSObject

@property (nonatomic) unsigned long long groupUpdateType;
@property (retain, nonatomic) NSString *handleID;

- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(unsigned long long)a0 handleID:(id)a1;

@end
