@class CKRecordZoneID;

@interface PFCloudKitImporterZonePurgedWorkItem : PFCloudKitImporterWorkItem {
    CKRecordZoneID *_purgedRecordZoneID;
}

- (id)description;
- (void)dealloc;
- (void)doWorkForStore:(id)a0 inMonitor:(id)a1 completion:(id /* block */)a2;
- (id)initWithPurgedRecordZoneID:(id)a0 options:(id)a1 request:(id)a2;

@end
