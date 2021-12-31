#include <iostream>
#include <list> //must include this to use list in the code
using namespace std;

class YoutubeChannel
{
    //ENSCAPSULATION: Enscapsulation states that this properties must be hidden/private from the user but must be accessible. We can change the values of the
    //data by exposing it using class methods.
private:
    //Different attributes of the class---->
    string Name;
    int SubscribersCount;
    string Tagline;
    list<string> PublishedVideoTitles; //implementing list in the code

    //This access modifier allows to use this property to be used in derived class.
protected:
    string OwnerName;
    int ContentQuality;

    //This makes class public, i.e. we can access this class anywhere in the code. It is called access modifier.
public:
    //implementing a constructor
    YoutubeChannel(string name, string ownerName, string tagline)
    {
        Name = name;
        OwnerName = ownerName;
        Tagline = tagline;
        SubscribersCount = 0;
        ContentQuality = 0;
    }

    //implementing class method
    void getinfo()
    {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscribersCount: " << SubscribersCount << endl;
        cout << "Tagline: " << Tagline << endl;
        cout << "Videos: " << endl;
        //using forloop to access all the elements of the list
        for (string videoTitle : PublishedVideoTitles)
        {
            cout << videoTitle << endl;
        }
        cout << endl;
    }
    //increases subscribe count using this method
    void Subscribe()
    {
        SubscribersCount++;
    }
    //decreases subscribe count using this method
    void Unsubscribe()
    {
        if (SubscribersCount > 0)
            SubscribersCount--;
    }
    //accessing PublishedVideoTitles property using this class method
    void PublishVideo(string title)
    {
        PublishedVideoTitles.push_back(title);
    }

    void CheckAnalytics(){
        if(Conte)
    }
};

//INHERITENCE: 'TalksChannel'(Derived class) inherites 'YoutubeChannel'(Base class) i.e. 'TalksChannel' is going to be having everything that
//'YoutubeChannel' has. Puoblic means that what is public in 'YoutubeChannel' is going to be public in 'TalksChannel'.
class TalksChannel : public YoutubeChannel
{
public:
    TalksChannel(string name, string ownerName, string tagline) : YoutubeChannel(name, ownerName, tagline)
    {
    }
    //This class cannot be accessed by base class objects i.e. 'YoutubeChannel'.
    void Quote()
    {
        cout << OwnerName << " is Making people aware of the issues that we are dealing at a global level." << endl;
        ContentQuality++;    
    }
};

class SingersYoutubeChannel : public YoutubeChannel
{
public:
    SingersYoutubeChannel(string name, string ownerName, string tagline) : YoutubeChannel(name, ownerName, tagline)
    {
    }
    //This class cannot be accessed by base class objects i.e. 'YoutubeChannel'.
    void Quote()
    {
        cout << OwnerName << " is taking Singing classes, learning new songs, learning how to dance...." << endl;
        ContentQuality++;
    }
};

//Main functions helps to use the classes and properties as we like.
int main()
{
    // creating an object for example:
    YoutubeChannel ytchannel("codehell", "Yagnik", "Be Original!!");
    ytchannel.PublishVideo("C++ for Advanced");
    ytchannel.PublishVideo("HTML & CSS Advanced");
    ytchannel.PublishVideo("OOPs");
    ytchannel.Subscribe();
    ytchannel.Subscribe();
    ytchannel.Subscribe();
    ytchannel.Unsubscribe();
    ytchannel.Unsubscribe();
    ytchannel.getinfo();

    TalksChannel TalksYtChannel("Taksh talks", "Taksh", "Dailycious...");
    TalksYtChannel.PublishVideo("Environmental Concerns");
    TalksYtChannel.PublishVideo("Incresing Unemployment");
    TalksYtChannel.PublishVideo("Unbalanced Economy");
    TalksYtChannel.Subscribe();
    TalksYtChannel.Subscribe();
    TalksYtChannel.Subscribe();
    TalksYtChannel.getinfo();
    TalksYtChannel.Quote();

    SingersYoutubeChannel SingersYtChannel("John Sings", "john", "Rock it!!");
    SingersYtChannel.Quote();
    SingersYtChannel.Quote();
    SingersYtChannel.Quote();
    SingersYtChannel.Quote();
    SingersYtChannel.Quote();

    YoutubeChannel *yt1 = &TalksYtChannel;
    YoutubeChannel *yt2 = &SingersYtChannel;

    return 0;
}
