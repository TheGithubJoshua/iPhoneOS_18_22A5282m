@class NSURL;
@protocol CADDiagnosticLogContext;

@interface CADCalendarDatabaseRedactor : NSObject {
    id<CADDiagnosticLogContext> _context;
}

@property (retain, nonatomic) NSURL *path;

- (void).cxx_destruct;
- (BOOL)redact;
- (BOOL)_redactOmatic:(struct sqlite3 { } *)a0;
- (BOOL)_specialRedactions:(struct sqlite3 { } *)a0;
- (id)initWithPath:(id)a0 context:(id)a1;

@end
