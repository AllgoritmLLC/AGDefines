//
//    The MIT License (MIT)
//
//    Copyright (c) 2015 Allgoritm LLC
//
//    Permission is hereby granted, free of charge, to any person obtaining a copy
//    of this software and associated documentation files (the "Software"), to deal
//    in the Software without restriction, including without limitation the rights
//    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//    copies of the Software, and to permit persons to whom the Software is
//    furnished to do so, subject to the following conditions:
//
//    The above copyright notice and this permission notice shall be included in all
//    copies or substantial portions of the Software.
//
//    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//    SOFTWARE.
//

#ifndef AGDefinesExamples_AGDefines_h
#define AGDefinesExamples_AGDefines_h

#import "VBDefines.h"

/**
 *  AGLS, AGLST are shortcuts for NSLocalizedString()
 */
#define AGLS(aStr) NSLocalizedString(aStr, @"")
#define AGLST(aStr, aTable) NSLocalizedStringFromTable(aStr, aTable, @"")

/**
 *  AGFont... are shortcuts for UIFont methods
 */
#define AGFontSystem(aSize) [UIFont systemFontOfSize:aSize]
#define AGFontSystemBold(aSize) [UIFont boldSystemFontOfSize:aSize]
#define AGFontNamed(aName, aSize) [UIFont fontWithName:aName size:aSize]

/**
 *  AGColor... are shortcuts for UIFont methods
 */
#define AGColor(aStr, aAlpha) { \
    NSParameterAssert(rgb && [rgb isKindOfClass:[NSString class]]); \
    NSParameterAssert(rgb.length == 6); \
    NSParameterAssert( aAlpha >= 0.0f && aAlpha <= 1.0f); \
    \
    float compR = [[rgb substringToIndex:2] floatValue] / 255.0f; \
    float compG = [[rgb substringWithRange:NSMakeRange(2, 2)] floatValue] / 255.0f; \
    float compB = [[rgb substringWithRange:NSMakeRange(4, 2)] floatValue] / 255.0f; \
    \
    return [UIColor colorWithRed:compR \
                           green:compG \
                            blue:compB \
                           alpha:aAlpha]; \
}

#define kColorRed AGColor(@"ff0000", 1.0f)

/**
 *  AGIsIphone is a device-detection method
 */
#define AGIsIphone [[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone

/**
 *  AGShowAlert... shows simple alert
 */
#define AGShowAlertOK(title, msg) AGShowAlert(title, msg, nil, nil)
#define AGShowAlertOKDelegate(title, msg) AGShowAlert(title, msg, self, nil)
#define AGShowAlertOKDelegateCancel(title, msg) AGShowAlert(title, msg, self, nil)

#define AGShowAlert(aTitle, aMsg, aDelegate, aCancelTitle) { \
    [[[UIAlertView alloc] initWithTitle:aTitle \
        message:aMsg \
        delegate:aDelegate \
        cancelButtonTitle:aCancelTitle \
        otherButtonTitles:@"OK", nil] \
        show]; \
}

#endif
