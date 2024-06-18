@class _KSFileEntry;

@interface _TIKeyboardSyncFileInstaller : NSObject {
    _KSFileEntry *_entry;
}

- (BOOL)valid;
- (void)execute;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEntry:(id)a0;

@end
