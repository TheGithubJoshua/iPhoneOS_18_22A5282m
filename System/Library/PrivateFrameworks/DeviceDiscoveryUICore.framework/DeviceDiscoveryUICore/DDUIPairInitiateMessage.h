@class DDUIApplicationInfo;

@interface DDUIPairInitiateMessage : NSObject

@property (readonly, nonatomic) DDUIApplicationInfo *applicationInfo;

- (id)initWithApplicationInfo:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
