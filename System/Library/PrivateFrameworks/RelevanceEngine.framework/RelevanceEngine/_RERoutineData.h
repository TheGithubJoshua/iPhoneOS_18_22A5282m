@class NSArray;

@interface _RERoutineData : NSObject <REAutomaticExportedInterface>

@property (nonatomic) long long mode;
@property (retain, nonatomic) NSArray *locationsOfInterest;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToRoutineData:(id)a0;

@end
