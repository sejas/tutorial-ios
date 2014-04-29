//
//  ViewController.h
//  pruebas
//
//  Created by zonAA____________ on 28/04/14.
//  Copyright (c) 2014 zonAApp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController<UIAlertViewDelegate> {
    IBOutlet UILabel *scoreLabel;
    IBOutlet UILabel *timerLabel;
    
    NSInteger count;
    NSInteger seconds;
    NSTimer *timer;
    
    // AVAudioPlayer objects!
    AVAudioPlayer *buttonBeep;
    AVAudioPlayer *secondBeep;
    AVAudioPlayer *backgroundMusic;
    
}
    - (IBAction)buttonPressed;
@end
