@class CPLRecordChange;

@interface CPLSimpleRecordView : CPLRecordView {
    CPLRecordChange *_synthesizedRecord;
}

- (id)initWithRecord:(id)a0;
- (void).cxx_destruct;
- (id)synthesizedRecord;
- (id)scopedIdentifier;

@end
