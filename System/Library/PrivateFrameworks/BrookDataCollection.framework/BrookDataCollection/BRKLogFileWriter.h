@class NSString, NSMutableArray;

@interface BRKLogFileWriter : BRKWriter <BRKLogWriter> {
    NSMutableArray *_json;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)writeJSON:(id)a0;
- (void)close;
- (void)_lock_close;
- (void)_lock_writeJSON:(id)a0;

@end
