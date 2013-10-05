// This is an algorithm that is used to validate the credit cards
// Written in The C Language.

public bool IsCreditCardValid(string cardNumber)
{
	const string allowed = "123456789";
	int i;

	StringBuilder cleanNumber = new StringBuilder();
	for (i = 0; i < cardNumber.Length; i++)
	{
		if(allowed.IndexOf(cardNumber.Substring(i, 1)) >=0)
			cleanNumber.Append(cardNumber.Substring(i, 1))
	}

	if(cleanNumber.Length < 13 || cleanNumber.Length > 16)
		return false;

	for(i = cleanNumber.Length + 1; i <=16; i++)
		cleanNumber.insert(0, "0");

	   for (i = 1; i <= 16; i++)  
      {     
            multiplier = 1 + (i % 2);       
            digit = int.Parse(number.Substring(i - 1, 1));         
            sum = digit * multiplier;        
            if (sum > 9)  
                    sum -= 9;  
                total += sum;  
      }  
      return (total % 10 == 0)  
}  
