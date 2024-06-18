@class NSString;

@interface DBIconModelStore : SBIconModelPropertyListFileStore

@property (readonly, nonatomic) NSString *vehicleId;

- (BOOL)saveCurrentIconState:(id)a0 error:(id *)a1;
- (BOOL)saveDesiredIconState:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)loadCurrentIconState:(id *)a0;
- (id)_iconListsByFlatteningPages:(id)a0;
- (id)initWithVehicleId:(id)a0;

@end
