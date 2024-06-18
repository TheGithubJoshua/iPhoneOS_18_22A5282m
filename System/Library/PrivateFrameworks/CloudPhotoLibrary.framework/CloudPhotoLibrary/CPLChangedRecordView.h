@class CPLRecordView, CPLRecordChange;

@interface CPLChangedRecordView : CPLRecordView

@property (readonly, nonatomic) CPLRecordView *baseRecordView;
@property (readonly, nonatomic) CPLRecordChange *change;

- (id)redactedDescription;
- (void).cxx_destruct;
- (id)description;
- (id)synthesizedRecord;
- (id)scopedIdentifier;
- (Class)recordClass;
- (id)changeForType:(unsigned long long)a0;
- (id)initWithChange:(id)a0 overRecordView:(id)a1;
- (id)placeholderRecord;
- (id)recordChangeData;
- (id)sharingRecordChangeData;

@end
