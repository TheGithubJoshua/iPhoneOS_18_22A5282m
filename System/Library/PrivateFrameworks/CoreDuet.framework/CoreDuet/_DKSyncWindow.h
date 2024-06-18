@class _DKEvent, NSDate;

@interface _DKSyncWindow : NSObject <NSCopying> {
    _DKEvent *_event;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (id)choppedWindowsFromSortedNormalizedWindows:(id)a0 betweenWindowMinimumDate:(id)a1 andWindowMaximumDate:(id)a2;

- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end