@class NSString;

@interface ICASDebugData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)toDict;

@end
