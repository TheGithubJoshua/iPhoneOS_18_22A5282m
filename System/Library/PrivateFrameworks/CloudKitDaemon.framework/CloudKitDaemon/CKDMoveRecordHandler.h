@class CKRecord, CKDMovePhotosOperation, CKMovePhotosChange;

@interface CKDMoveRecordHandler : CKDModifyRecordHandler

@property (retain, nonatomic) CKMovePhotosChange *moveChange;
@property (weak, nonatomic) CKDMovePhotosOperation *operation;
@property (retain, nonatomic) CKRecord *serverDestinationRecord;
@property (retain, nonatomic) CKRecord *serverMoveMarkerRecord;

+ (id)moveHandlerWithMoveChange:(id)a0 operation:(id)a1;

- (id)record;
- (void).cxx_destruct;
- (id)_initWithMoveChange:(id)a0 operation:(id)a1;

@end
