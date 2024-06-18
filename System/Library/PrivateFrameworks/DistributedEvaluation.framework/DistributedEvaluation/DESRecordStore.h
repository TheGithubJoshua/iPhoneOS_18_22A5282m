@class NSString;

@interface DESRecordStore : NSObject {
    NSString *_bundleId;
}

@property (readonly, nonatomic, getter=isPermitted) BOOL permitted;
@property (readonly, nonatomic) BOOL shouldMakeRecord;

+ (void)_getServiceProxyWithErrorHandler:(id /* block */)a0 block:(id /* block */)a1;

- (void)saveRecordWithData:(id)a0 recordInfo:(id)a1 completion:(id /* block */)a2;
- (void)fetchSavedRecordInfoWithCompletion:(id /* block */)a0;
- (void)deleteAllSavedRecordsWithCompletion:(id /* block */)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldMakeRecordWithFrequency:(unsigned long long)a0;
- (void)deleteSavedRecordWithIdentfier:(id)a0 completion:(id /* block */)a1;
- (void)fetchNativeRecordDataForRecordUUID:(id)a0 completion:(id /* block */)a1;
- (void)saveCoreDuetEvent:(id)a0 completion:(id /* block */)a1;

@end
