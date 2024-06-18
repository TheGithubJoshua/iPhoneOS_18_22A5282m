@class NSString;

@interface StructuredDataReport : OSAReport {
    int _log_type;
    NSString *_raw_logfile;
}

- (id)reportNamePrefix;
- (id)problemType;
- (id)initWithType:(int)a0 withFile:(id)a1;
- (BOOL)isActionable;
- (void)generateLogAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (void)dealloc;
- (void)generateCustomLogAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (id)appleCareDetails;
- (int)streamContentAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;

@end
